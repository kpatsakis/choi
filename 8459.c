void fun()
{
  char* entity_3;
  char entity_6[92] = "";
  entity_6 = NULL;
  char* entity_8;
  char* entity_7;
  memset(entity_6, 't', 92-1);
  entity_6[92-1]='';
  entity_7 = (char*)malloc(92*sizeof(char));
  entity_7[92-1]='';
  entity_3 = (char*)malloc(93*sizeof(char));
  entity_3[93-1]='';
  entity_8 = (char*)malloc(2*sizeof(char));
  entity_8[2-1]='';
  memcpy(entity_3, entity_6, 92*sizeof(char));
}