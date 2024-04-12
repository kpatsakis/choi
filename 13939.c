void fun()
{
  int entity_6 = 99;
  entity_6 = 76;
  char entity_2[62] = "";
  char* entity_0;
  memset(entity_2, 'o', 62-1);
  entity_2[62-1]='0';
  entity_0 = (char*)malloc(entity_6*sizeof(char));
  entity_0[0]='0';
  memcpy(entity_0, entity_2, 62*sizeof(char));
}