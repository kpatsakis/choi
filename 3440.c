void fun()
{
  int entity_8 = 12;
  int entity_4 = 73;
  char entity_7[82] = "";
  entity_7 = NULL;
  char entity_5[56] = "";
  entity_5 = NULL;
  char* entity_3;
  char* entity_1;
  memset(entity_7, 'U', 82-1);
  entity_7[82-1]='';
  entity_3 = (char*)malloc(entity_8*sizeof(char));
  entity_3[entity_8-1]='';
  entity_1 = (char*)malloc(9*sizeof(char));
  entity_1[9-1]='';
  memset(entity_5, 'o', 56-1);
  entity_5[56-1]='';
  strcpy(entity_3, entity_5);
}