void fun()
{
  int entity_1 = 63;
  int entity_3 = 74;
  char* entity_6;
  char entity_2[13] = "";
  entity_2 = NULL;
  entity_6 = (char*)malloc(92*sizeof(char));
  entity_6[92-1]='';
  memset(entity_2, 'B', 13-1);
  entity_2[13-1]='';
  entity_3 = 45;
  entity_2[entity_3] = 'k';
}