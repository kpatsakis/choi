void fun()
{
  char entity_9[78] = "";
  char* entity_0;
  entity_0 = (char*)malloc(89*sizeof(char));
  entity_0[0]='0';
  memset(entity_9, 'm', 78-1);
  entity_9[78-1]='0';
  memcpy(entity_0, entity_9, 78*sizeof(char));
}