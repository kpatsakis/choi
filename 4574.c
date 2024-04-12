void fun()
{
  int entity_3 = 70;
  char entity_6[86] = "";
  entity_6 = NULL;
  char entity_2[18] = "";
  entity_2 = NULL;
  char* entity_1;
  char* entity_5;
  memset(entity_6, 'A', 86-1);
  entity_6[86-1]='';
  entity_5 = (char*)malloc(entity_3*sizeof(char));
  entity_5[entity_3-1]='';
  memset(entity_2, 'g', 18-1);
  entity_2[18-1]='';
  entity_1 = (char*)malloc(34*sizeof(char));
  entity_1[34-1]='';
  memcpy(entity_5, entity_2, 18*sizeof(char));
}