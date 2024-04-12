void fun()
{
  int entity_6 = 19;
  int entity_1 = 96;
  char entity_0[90] = "";
  entity_0 = NULL;
  char* entity_5;
  char* entity_3;
  entity_3 = (char*)malloc(26*sizeof(char));
  entity_3[26-1]='';
  memset(entity_0, 'A', 90-1);
  entity_0[90-1]='';
  entity_5 = (char*)malloc(entity_6*sizeof(char));
  entity_5[entity_6-1]='';
  memcpy(entity_5, entity_0, 90*sizeof(char));
}