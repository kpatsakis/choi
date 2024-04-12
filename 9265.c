void fun()
{
  int entity_2 = 9;
  char entity_3[78] = "";
  entity_3 = NULL;
  char* entity_0;
  char* entity_1;
  char* entity_7;
  entity_7 = (char*)malloc(66*sizeof(char));
  entity_7[66-1]='';
  entity_0 = (char*)malloc(0*sizeof(char));
  entity_0[0-1]='';
  entity_1 = (char*)malloc(entity_2*sizeof(char));
  entity_1[entity_2-1]='';
  memset(entity_3, 'Z', 78-1);
  entity_3[78-1]='';
  strcpy(entity_1, entity_3);
}