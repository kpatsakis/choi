void fun()
{
  int entity_6 = 60;
  int entity_5 = 8;
  char entity_1[47] = "";
  entity_1 = NULL;
  char* entity_4;
  char* entity_3;
  entity_3 = (char*)malloc(entity_6*sizeof(char));
  entity_3[entity_6-1]='';
  memset(entity_1, 'I', 47-1);
  entity_1[47-1]='';
  entity_4 = (char*)malloc(39*sizeof(char));
  entity_4[39-1]='';
  memcpy(entity_3, entity_1, 47*sizeof(char));
}