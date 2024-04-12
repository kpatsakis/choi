void fun()
{
  int entity_9 = 40;
  int entity_3 = 13;
  int entity_6 = 65;
  char* entity_1;
  char entity_8[31] = "";
  entity_8 = NULL;
  char* entity_7;
  entity_7 = (char*)malloc(92*sizeof(char));
  entity_7[92-1]='';
  memset(entity_8, 't', 31-1);
  entity_8[31-1]='';
  entity_1 = (char*)malloc(entity_3*sizeof(char));
  entity_1[entity_3-1]='';
  entity_3 = 54;
  memcpy(entity_1, entity_8, 31*sizeof(char));
}