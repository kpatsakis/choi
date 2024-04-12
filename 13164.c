void fun()
{
  int entity_1 = 89;
  entity_1 = 49;
  char entity_5[8] = "";
  char* entity_7;
  memset(entity_5, 'M', 8-1);
  entity_5[8-1]='0';
  entity_7 = (char*)malloc(entity_1*sizeof(char));
  entity_7[0]='0';
  memcpy(entity_7, entity_5, 8*sizeof(char));
}