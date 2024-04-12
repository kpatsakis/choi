void fun()
{
  int entity_0 = 94;
  entity_0 = 23;
  char entity_7 = 'k';
  char* entity_5;
  char entity_8[62] = "";
  memset(entity_8, 'P', 62-1);
  entity_8[62-1]='0';
  entity_5 = (char*)malloc(entity_0*sizeof(char));
  entity_5[0]='0';
  memcpy(entity_5, entity_8, 62*sizeof(char));
}