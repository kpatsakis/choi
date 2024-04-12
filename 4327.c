void fun()
{
  int entity_4 = 50;
  char entity_3[33] = "";
  entity_3 = NULL;
  char* entity_6;
  char* entity_1;
  memset(entity_3, 'r', 33-1);
  entity_3[33-1]='';
  entity_1 = (char*)malloc(entity_4*sizeof(char));
  entity_1[entity_4-1]='';
  entity_6 = (char*)malloc(58*sizeof(char));
  entity_6[58-1]='';
  entity_4 = 90;
  memcpy(entity_1, entity_3, 33*sizeof(char));
}