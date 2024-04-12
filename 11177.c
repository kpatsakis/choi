void fun()
{
  char* entity_7;
  char entity_1[47] = "";
  memset(entity_1, 'B', 47-1);
  entity_1[47-1]='0';
  entity_7 = (char*)malloc(15*sizeof(char));
  entity_7[0]='0';
  memcpy(entity_7, entity_1, 47*sizeof(char));
}