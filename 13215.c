void fun()
{
  int entity_8 = 78;
  entity_8 = 68;
  char* entity_0;
  char entity_1[11] = "";
  char entity_9 = 'F';
  memset(entity_1, 'j', 11-1);
  entity_1[11-1]='0';
  entity_0 = (char*)malloc(entity_8*sizeof(char));
  entity_0[0]='0';
  strcpy(entity_0, entity_1);
}