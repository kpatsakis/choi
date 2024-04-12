void fun()
{
  int entity_4 = 92;
  int entity_0 = 30;
  int entity_6 = 76;
  char* entity_2;
  char entity_5[61] = "";
  entity_5 = NULL;
  char* entity_3;
  memset(entity_5, 'N', 61-1);
  entity_5[61-1]='';
  entity_2 = (char*)malloc(82*sizeof(char));
  entity_2[82-1]='';
  entity_3 = (char*)malloc(entity_6*sizeof(char));
  entity_3[entity_6-1]='';
  strcpy(entity_3, entity_5);
}