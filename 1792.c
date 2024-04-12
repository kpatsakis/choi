void fun()
{
  int entity_5 = 7;
  char entity_4[entity_5] = "";
  entity_4 = NULL;
  char* entity_7;
  char* entity_3;
  entity_3 = (char*)malloc(96*sizeof(char));
  entity_3[96-1]='';
  entity_7 = (char*)malloc(92*sizeof(char));
  entity_7[92-1]='';
  memset(entity_4, 'v', entity_5-1);
  entity_4[entity_5-1]='';
  memcpy(entity_3, entity_4, entity_5*sizeof(char));
}