void fun()
{
  int entity_9 = 82;
  int entity_2 = 18;
  char* entity_1;
  char* entity_6;
  char entity_3[31] = "";
  entity_3 = NULL;
  entity_6 = (char*)malloc(82*sizeof(char));
  entity_6[82-1]='';
  memset(entity_3, 'C', 31-1);
  entity_3[31-1]='';
  entity_1 = (char*)malloc(entity_2*sizeof(char));
  entity_1[entity_2-1]='';
  strcpy(entity_1, entity_3);
}