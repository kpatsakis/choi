void fun()
{
  int entity_1 = 50;
  entity_1 = 63;
  char* entity_3;
  char entity_5[89] = "";
  entity_5 = NULL;
  char entity_0[entity_1] = "";
  entity_0 = NULL;
  memset(entity_5, 'C', 89-1);
  entity_5[89-1]='';
  memset(entity_0, 'F', entity_1-1);
  entity_0[entity_1-1]='';
  entity_3 = (char*)malloc(82*sizeof(char));
  entity_3[82-1]='';
  memcpy(entity_3, entity_0, entity_1*sizeof(char));
}