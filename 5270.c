void fun()
{
  int entity_2 = 86;
  char* entity_7;
  char entity_1[59] = "";
  entity_1 = NULL;
  memset(entity_1, 'X', 59-1);
  entity_1[59-1]='';
  entity_7 = (char*)malloc(4*sizeof(char));
  entity_7[4-1]='';
  memcpy(entity_7, entity_1, 59*sizeof(char));
}