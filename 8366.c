void fun()
{
  int entity_4 = 26;
  char* entity_6;
  char entity_5[92] = "";
  entity_5 = NULL;
  char entity_8 = 'u';
  memset(entity_5, 'v', 92-1);
  entity_5[92-1]='';
  entity_6 = (char*)malloc(17*sizeof(char));
  entity_6[17-1]='';
  strcpy(entity_6, entity_5);
}