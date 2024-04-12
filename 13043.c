void fun()
{
  int entity_3 = 32;
  int entity_0 = 62;
  int entity_8 = 32;
  entity_0 = 50;
  char* entity_7;
  char entity_4[entity_0] = "";
  memset(entity_4, 's', entity_0-1);
  entity_4[entity_0-1]='0';
  entity_7 = (char*)malloc(87*sizeof(char));
  entity_7[0]='0';
  memcpy(entity_7, entity_4, entity_0*sizeof(char));
}