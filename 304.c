void fun()
{
  int entity_3 = 23;
  entity_3 = 94;
  char* entity_7;
  char entity_5[90] = "";
  entity_5 = NULL;
  char* entity_4;
  entity_7 = (char*)malloc(entity_3*sizeof(char));
  entity_7[entity_3-1]='';
  memset(entity_5, 'y', 90-1);
  entity_5[90-1]='';
  entity_4 = (char*)malloc(36*sizeof(char));
  entity_4[36-1]='';
  memcpy(entity_7, entity_5, 90*sizeof(char));
}