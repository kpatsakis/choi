void fun()
{
  int entity_3 = 60;
  char entity_5[78] = "";
  entity_5 = NULL;
  char* entity_7;
  char entity_0[87] = "";
  entity_0 = NULL;
  char entity_2[entity_3] = "";
  entity_2 = NULL;
  memset(entity_5, 'R', 78-1);
  entity_5[78-1]='';
  memset(entity_0, 'F', 87-1);
  entity_0[87-1]='';
  memset(entity_2, 'x', entity_3-1);
  entity_2[entity_3-1]='';
  entity_7 = (char*)malloc(35*sizeof(char));
  entity_7[35-1]='';
  memcpy(entity_7, entity_2, entity_3*sizeof(char));
}