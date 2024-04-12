void fun()
{
  int entity_3 = 23;
  int entity_7 = 10;
  char* entity_0;
  char entity_2[entity_3] = "";
  entity_2 = NULL;
  char entity_4 = 'J';
  char* entity_1;
  memset(entity_2, 'G', entity_3-1);
  entity_2[entity_3-1]='';
  entity_1 = (char*)malloc(12*sizeof(char));
  entity_1[12-1]='';
  entity_0 = (char*)malloc(67*sizeof(char));
  entity_0[67-1]='';
  strcpy(entity_1, entity_2);
}