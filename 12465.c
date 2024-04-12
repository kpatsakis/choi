void fun()
{
  int entity_6 = 32;
  char* entity_5;
  char entity_7[35] = "";
  memset(entity_7, 'e', 35-1);
  entity_7[35-1]='0';
  entity_5 = (char*)malloc(entity_6*sizeof(char));
  entity_5[0]='0';
  memcpy(entity_5, entity_7, 35*sizeof(char));
}