void fun()
{
  int entity_6 = 17;
  int entity_1 = 85;
  entity_1 = 99;
  char* entity_4;
  char entity_5[entity_1] = "";
  entity_5 = NULL;
  char* entity_7;
  char entity_0[48] = "";
  entity_0 = NULL;
  memset(entity_5, 'Z', entity_1-1);
  entity_5[entity_1-1]='';
  entity_7 = (char*)malloc(72*sizeof(char));
  entity_7[72-1]='';
  memset(entity_0, 'e', 48-1);
  entity_0[48-1]='';
  entity_4 = (char*)malloc(13*sizeof(char));
  entity_4[13-1]='';
  memcpy(entity_7, entity_5, entity_1*sizeof(char));
}