void fun()
{
  int entity_3 = 89;
  char* entity_4;
  char* entity_1;
  char entity_8[entity_3] = "";
  entity_8 = NULL;
  char* entity_5;
  memset(entity_8, 'v', entity_3-1);
  entity_8[entity_3-1]='';
  entity_1 = (char*)malloc(27*sizeof(char));
  entity_1[27-1]='';
  entity_5 = (char*)malloc(70*sizeof(char));
  entity_5[70-1]='';
  entity_4 = (char*)malloc(57*sizeof(char));
  entity_4[57-1]='';
  memcpy(entity_1, entity_8, entity_3*sizeof(char));
}