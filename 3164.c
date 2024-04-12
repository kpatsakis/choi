void fun()
{
  int entity_6 = 2;
  int entity_9 = 89;
  char entity_5[21] = "";
  entity_5 = NULL;
  char* entity_4;
  char* entity_7;
  memset(entity_5, 'N', 21-1);
  entity_5[21-1]='';
  entity_7 = (char*)malloc(85*sizeof(char));
  entity_7[85-1]='';
  entity_4 = (char*)malloc(entity_6*sizeof(char));
  entity_4[entity_6-1]='';
  memcpy(entity_4, entity_5, 21*sizeof(char));
}