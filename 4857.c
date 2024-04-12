void fun()
{
  int entity_8 = 33;
  char entity_6[89] = "";
  entity_6 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(38*sizeof(char));
  entity_2[38-1]='';
  memset(entity_6, 'r', 89-1);
  entity_6[89-1]='';
  strcpy(entity_2, entity_6);
}