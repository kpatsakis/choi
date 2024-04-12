void fun()
{
  int entity_2 = 75;
  int entity_7 = 21;
  char entity_6 = 'r';
  char* entity_8;
  char entity_0[62] = "";
  entity_0 = NULL;
  char entity_1 = 'y';
  memset(entity_0, 'j', 62-1);
  entity_0[62-1]='';
  entity_8 = (char*)malloc(entity_2*sizeof(char));
  entity_8[entity_2-1]='';
  memcpy(entity_8, entity_0, 62*sizeof(char));
}