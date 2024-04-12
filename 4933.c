void fun()
{
  int entity_5 = 100;
  char* entity_7;
  char entity_2 = 'y';
  char entity_1[entity_5] = "";
  entity_1 = NULL;
  char* entity_6;
  entity_6 = (char*)malloc(2*sizeof(char));
  entity_6[2-1]='';
  entity_7 = (char*)malloc(11*sizeof(char));
  entity_7[11-1]='';
  memset(entity_1, 'K', entity_5-1);
  entity_1[entity_5-1]='';
  entity_5 = 23;
  memcpy(entity_7, entity_1, entity_5*sizeof(char));
}