void fun()
{
  int entity_3 = 39;
  char entity_6[62] = "";
  char* entity_9;
  entity_9 = (char*)malloc(entity_3*sizeof(char));
  entity_9[0]='0';
  memset(entity_6, 'y', 62-1);
  entity_6[62-1]='0';
  entity_3 = 40;
  strcpy(entity_9, entity_6);
}