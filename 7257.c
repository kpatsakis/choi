void fun()
{
  int entity_4 = 73;
  char entity_2[29] = "";
  entity_2 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(22*sizeof(char));
  entity_3[22-1]='';
  memset(entity_2, 'e', 29-1);
  entity_2[29-1]='';
  strcpy(entity_3, entity_2);
}