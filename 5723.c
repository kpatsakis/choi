void fun()
{
  int entity_8 = 13;
  int entity_1 = 63;
  char* entity_7;
  char entity_5[92] = "";
  entity_5 = NULL;
  char* entity_6;
  entity_6 = (char*)malloc(entity_1*sizeof(char));
  entity_6[entity_1-1]='';
  entity_7 = (char*)malloc(13*sizeof(char));
  entity_7[13-1]='';
  memset(entity_5, 'T', 92-1);
  entity_5[92-1]='';
  memcpy(entity_6, entity_5, 92*sizeof(char));
}