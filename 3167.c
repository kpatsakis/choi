void fun()
{
  int entity_1 = 16;
  char* entity_6;
  char entity_3[entity_1] = "";
  entity_3 = NULL;
  char entity_0[78] = "";
  entity_0 = NULL;
  memset(entity_0, 'I', 78-1);
  entity_0[78-1]='';
  memset(entity_3, 'P', entity_1-1);
  entity_3[entity_1-1]='';
  entity_6 = (char*)malloc(22*sizeof(char));
  entity_6[22-1]='';
  entity_3[98] = 'i';
}