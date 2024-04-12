void fun()
{
  int entity_7 = 98;
  char* entity_4;
  char entity_5[96] = "";
  memset(entity_5, 's', 96-1);
  entity_5[96-1]='0';
  entity_4 = (char*)malloc(entity_7*sizeof(char));
  entity_4[0]='0';
  memcpy(entity_4, entity_5, 96*sizeof(char));
}