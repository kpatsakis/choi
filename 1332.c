void fun()
{
  int entity_2 = 36;
  entity_2 = 77;
  char entity_7 = 'R';
  char entity_9 = 'Y';
  char entity_4 = 's';
  char* entity_3;
  char entity_5[4] = "";
  entity_5 = NULL;
  memset(entity_5, 'D', 4-1);
  entity_5[4-1]='';
  entity_3 = (char*)malloc(entity_2*sizeof(char));
  entity_3[entity_2-1]='';
  memcpy(entity_3, entity_5, 4*sizeof(char));
}