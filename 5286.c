void fun()
{
  int entity_1 = 45;
  char* entity_4;
  char entity_3[2] = "";
  entity_3 = NULL;
  char* entity_6;
  char* entity_7;
  memset(entity_3, 'I', 2-1);
  entity_3[2-1]='';
  entity_6 = (char*)malloc(entity_1*sizeof(char));
  entity_6[entity_1-1]='';
  entity_7 = (char*)malloc(18*sizeof(char));
  entity_7[18-1]='';
  entity_4 = (char*)malloc(45*sizeof(char));
  entity_4[45-1]='';
  memcpy(entity_6, entity_3, 2*sizeof(char));
}