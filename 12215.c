void fun()
{
  int entity_3 = 77;
  char* entity_7;
  char entity_8[entity_3] = "";
  char* entity_1;
  entity_1 = (char*)malloc(63*sizeof(char));
  entity_1[0]='0';
  entity_7 = (char*)malloc(24*sizeof(char));
  entity_7[0]='0';
  memset(entity_8, 'j', entity_3-1);
  entity_8[entity_3-1]='0';
  memcpy(entity_7, entity_8, entity_3*sizeof(char));
}