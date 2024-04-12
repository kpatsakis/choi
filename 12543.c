void fun()
{
  int entity_5 = 76;
  char entity_2[29] = "";
  char* entity_9;
  entity_9 = (char*)malloc(entity_5*sizeof(char));
  entity_9[0]='0';
  memset(entity_2, 'F', 29-1);
  entity_2[29-1]='0';
  strcpy(entity_9, entity_2);
}