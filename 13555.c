void fun()
{
  int entity_9 = 78;
  entity_9 = 30;
  char* entity_5;
  char entity_6[62] = "";
  entity_5 = (char*)malloc(entity_9*sizeof(char));
  entity_5[0]='0';
  memset(entity_6, 'P', 62-1);
  entity_6[62-1]='0';
  strcpy(entity_5, entity_6);
}