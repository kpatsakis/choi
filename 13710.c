void fun()
{
  int entity_5 = 23;
  char entity_1[entity_5] = "";
  char* entity_3;
  entity_3 = (char*)malloc(21*sizeof(char));
  entity_3[0]='0';
  memset(entity_1, 'o', entity_5-1);
  entity_1[entity_5-1]='0';
  entity_5 = 89;
  memcpy(entity_3, entity_1, entity_5*sizeof(char));
}