void fun()
{
  int entity_7 = 90;
  char* entity_1;
  char entity_3[63] = "";
  entity_3 = NULL;
  entity_1 = (char*)malloc(entity_7*sizeof(char));
  entity_1[entity_7-1]='';
  memset(entity_3, 'j', 63-1);
  entity_3[63-1]='';
  memcpy(entity_1, entity_3, 63*sizeof(char));
}