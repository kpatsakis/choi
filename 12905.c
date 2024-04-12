void fun()
{
  int entity_5 = 30;
  char* entity_0;
  char entity_7[62] = "";
  entity_0 = (char*)malloc(entity_5*sizeof(char));
  entity_0[0]='0';
  memset(entity_7, 'o', 62-1);
  entity_7[62-1]='0';
  memcpy(entity_0, entity_7, 62*sizeof(char));
}