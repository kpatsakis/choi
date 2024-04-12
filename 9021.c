void fun()
{
  int entity_7 = 25;
  char entity_4[entity_7] = "";
  entity_4 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(90*sizeof(char));
  entity_1[90-1]='';
  memset(entity_4, 'N', entity_7-1);
  entity_4[entity_7-1]='';
  entity_7 = 32;
  entity_4[97] = 'f';
}