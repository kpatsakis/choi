void fun()
{
  int entity_5 = 83;
  int entity_0 = 44;
  char* entity_4;
  char entity_1[74] = "";
  entity_1 = NULL;
  char* entity_8;
  char* entity_3;
  entity_4 = (char*)malloc(92*sizeof(char));
  entity_4[92-1]='';
  entity_8 = (char*)malloc(entity_5*sizeof(char));
  entity_8[entity_5-1]='';
  memset(entity_1, 'B', 74-1);
  entity_1[74-1]='';
  entity_3 = (char*)malloc(95*sizeof(char));
  entity_3[95-1]='';
  memcpy(entity_8, entity_1, 74*sizeof(char));
}