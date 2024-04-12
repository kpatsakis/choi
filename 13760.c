void fun()
{
  int entity_1 = 97;
  char entity_5[20] = "";
  char* entity_3;
  entity_3 = (char*)malloc(entity_1*sizeof(char));
  entity_3[0]='0';
  memset(entity_5, 'n', 20-1);
  entity_5[20-1]='0';
  entity_1 = 59;
  memcpy(entity_3, entity_5, 20*sizeof(char));
}