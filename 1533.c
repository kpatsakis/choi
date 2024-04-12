void fun()
{
  int entity_4 = 80;
  entity_4 = 8;
  char entity_5 = 'z';
  char* entity_2;
  char entity_3[6] = "";
  entity_3 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(entity_4*sizeof(char));
  entity_1[entity_4-1]='';
  memset(entity_3, 'L', 6-1);
  entity_3[6-1]='';
  entity_2 = (char*)malloc(64*sizeof(char));
  entity_2[64-1]='';
  memcpy(entity_1, entity_3, 6*sizeof(char));
}