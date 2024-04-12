void fun()
{
  int entity_3 = 14;
  char entity_1[6] = "";
  entity_1 = NULL;
  char* entity_7;
  char* entity_5;
  memset(entity_1, 'R', 6-1);
  entity_1[6-1]='';
  entity_7 = (char*)malloc(94*sizeof(char));
  entity_7[94-1]='';
  entity_5 = (char*)malloc(1*sizeof(char));
  entity_5[1-1]='';
  entity_3 = 87;
  entity_1[entity_3] = 'U';
}