void fun()
{
  int entity_7 = 34;
  char entity_4[72] = "";
  char* entity_1;
  char* entity_8;
  memset(entity_4, 'q', 72-1);
  entity_4[72-1]='0';
  entity_8 = (char*)malloc(9*sizeof(char));
  entity_8[0]='0';
  entity_1 = (char*)malloc(entity_7*sizeof(char));
  entity_1[0]='0';
  entity_7 = 50;
  memcpy(entity_1, entity_4, 72*sizeof(char));
}