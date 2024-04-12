void fun()
{
  int entity_0 = 60;
  char entity_6[entity_0] = "";
  char* entity_3;
  char* entity_9;
  char entity_7[62] = "";
  memset(entity_6, 'u', entity_0-1);
  entity_6[entity_0-1]='0';
  entity_9 = (char*)malloc(82*sizeof(char));
  entity_9[0]='0';
  entity_3 = (char*)malloc(84*sizeof(char));
  entity_3[0]='0';
  memset(entity_7, 'k', 62-1);
  entity_7[62-1]='0';
  memcpy(entity_3, entity_6, entity_0*sizeof(char));
}