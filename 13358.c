void fun()
{
  int entity_1 = 64;
  char entity_7[34] = "";
  char* entity_5;
  memset(entity_7, 's', 34-1);
  entity_7[34-1]='0';
  entity_5 = (char*)malloc(entity_1*sizeof(char));
  entity_5[0]='0';
  entity_1 = 18;
  memcpy(entity_5, entity_7, 34*sizeof(char));
}