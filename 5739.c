void fun()
{
  int entity_5 = 77;
  char* entity_2;
  char* entity_8;
  char entity_4[entity_5] = "";
  entity_4 = NULL;
  char entity_1[50] = "";
  entity_1 = NULL;
  memset(entity_1, 'I', 50-1);
  entity_1[50-1]='';
  entity_2 = (char*)malloc(79*sizeof(char));
  entity_2[79-1]='';
  entity_8 = (char*)malloc(90*sizeof(char));
  entity_8[90-1]='';
  memset(entity_4, 'r', entity_5-1);
  entity_4[entity_5-1]='';
  memcpy(entity_8, entity_4, entity_5*sizeof(char));
}