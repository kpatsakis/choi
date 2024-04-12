void fun()
{
  int entity_1 = 28;
  char* entity_3;
  char* entity_6;
  char entity_5[entity_1] = "";
  entity_5 = NULL;
  char entity_9 = 'j';
  char* entity_7;
  entity_6 = (char*)malloc(10*sizeof(char));
  entity_6[10-1]='';
  memset(entity_5, 'j', entity_1-1);
  entity_5[entity_1-1]='';
  entity_7 = (char*)malloc(54*sizeof(char));
  entity_7[54-1]='';
  entity_3 = (char*)malloc(48*sizeof(char));
  entity_3[48-1]='';
  memcpy(entity_3, entity_5, entity_1*sizeof(char));
}